#include "member.h"

#include <queue>

#include "database.h"

namespace algdb {

void Member::DumpConnections() {
  std::cout << "(" << member_id << ")";
  for (auto &m : connecting_members) {
    auto conn = m.second;
    std::cout << "->" << conn.dst->member_id << 
      "(" << conn.group->group_id << ")";
  }
  std::cout << "\n";
}

void Member::PathToMemberBFS(uint64_t dst_member_id) {
  this->color = COLOR_GRAY;
  this->parent = NULL;
  std::queue<Member*> q;
  q.push(this);
  while(!q.empty()){
    Member* m = q.front();
    q.pop();
    for(auto c_m : m->connecting_members){
      auto m_c = c_m.second;
      auto v = m_c.dst;
      if(v->member_id==dst_member_id){
        v->parent = m;
        PrintPath(v);
        return;
      }
      if(v->color==COLOR_WHITE){
        v->color = COLOR_GRAY;
        v->parent = m;
        q.push(v);
      }
    }
    m->color = COLOR_BLACK;
  }
}

void Member::PathToMemberIDDFS(uint64_t dst_member_id) {
  // Fill in your code here
}
  
void Member::PrintPath(Member* dst) {
  Member *curr = dst;
  while(curr && curr != this) {
    std::cout << curr->member_name << " <- ";
    curr = curr->parent;
  }
  std::cout << this->member_name << "\n";
}

}
