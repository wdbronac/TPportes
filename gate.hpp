
namespace gate {
  typedef std::function<void ()>            Action;
  typedef std::list<std::weak_ptr<Action>>  Actions;

  typedef std::pair<bool, Actions>          Wire;
  typedef std::shared_ptr<Wire>             refWire;

  typedef std::pair<std::shared_ptr<Wire>, bool>       SetRequest;
  typedef std::multimap<double,SetRequest>             Requests;

  typedef std::pair<double,Requests>                   Agenda;

  inline refWire   wire   ()                 {return std::make_shared<Wire>(false,Actions());}
  inline bool&     value  (refWire w)        {return w->first;}

  inline refAgenda   agenda   ()                 {return std::make_shared<Agenda>(0,Actions());}
  inline bool&     value  (refAgenda a)        {return a->first;}

  inline refProbe   probe   (std::make_shared<Agenda> a,std::make_shared<Wire> a,char c) {

  }


  inline bool&     value  (refProbe p)        {return p->first;}
}









void gate::___(){
    std::cout << "+----------------+-------+-----+" << std::endl;
}

void gate::notify( std::make_shared<Agenda> agenda, std::make_shared<Wire> a, bool b,double d){
}

void gate::flush

void gate::set(std::make_shared<Wire> w, bool b){

}
