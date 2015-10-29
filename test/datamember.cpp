#include <boost/python.hpp>
#include <string>

using namespace std;
namespace bp=boost::python;

struct Data{
  Data(const int id,
       const string& name) : _id(id), _name(name) {}
  const int _id;
  string _name;
};

BOOST_PYTHON_MODULE(datamember) {
  bp::class_<Data>("Data", bp::init<int, const string&>())
    .def_readonly("id", &Data::_id)
    .def_readwrite("name", &Data::_name)
    ;
}
