#include <iostream>
#include <map>
#include <algorithm>

//todo rename
// class error_easy_find : public std::exception{
//     public:
//         error_easy_find(int numero=0, std::string const& phrase="", int niveau=0) throw()
//             :err_num_(numero),description_err_(phrase),err_lvl(niveau)
//     {}

//         virtual char const* what() const throw();
//     private:
//         int err_num_;               //Numéro de l'erreur
//         std::string description_err_;            //Description de l'erreur
//         int err_lvl;               //Niveau de l'erreur

// };

// template<typename T>
// typename T::iterator easyfind(T& list_container, int i){
    
//     typename T::iterator it = std::find(list_container.begin(), list_container.end(), i);
    
//     if(it == list_container.end())
//         throw::std::runtime_error("couldnt find the value");

//     return(it);
// }

template<typename T>
typename T::iterator easyfind(T& list_container, int i){
    
    typename T::iterator it = std::find(list_container.begin(), list_container.end(), i);
    
    if(it == list_container.end())
        throw std::runtime_error("couldnt find the value");

    return(it);
}