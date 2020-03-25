/**
   @brief KMP算法实现
   @par 2020-03-24
*/

#include <string>
#include <iostream>
#include <vector>


void recursion_match(const std::string& _strTarget , std::vector<size_t>& _rOutOffset , size_t _begIndex , size_t _endIndex){
    if(_endIndex >= _strTarget.size()){
        return ;
    }
    if(_strTarget[_begIndex] == _strTarget[_endIndex]){
        ++_begIndex ;
    } else if(_strTarget[0] == _strTarget[_endIndex]){
        _begIndex = 1 ;
    } else {
        _begIndex = 0 ;
    }
    ++_endIndex ;
    _rOutOffset.push_back(_begIndex) ;
    recursion_match(_strTarget , _rOutOffset , _begIndex , _endIndex) ;
}

void target_parse(const std::string& _strTarget , const std::string& _strSrc, std::vector<size_t>& _rOutSubIndex) {
    std::vector<size_t> vecSubOffset ;
    vecSubOffset.push_back(0) ;
    recursion_match(_strSrc, vecSubOffset , 0 , 1) ;
    size_t sizeTarget = _strTarget.size() ;
    size_t sizeSrc = _strSrc.size() ;
    for(size_t i=0,j=0 ; i < sizeTarget ;){
        if(_strTarget[i] == _strSrc[j]){
            ++j ;
            ++i ;
        } else if (j == 0){
            ++i ;
        } else {
            i += j ;
            j = vecSubOffset[j] ;
            i -= j ;
        }
        if(j == sizeSrc){
            _rOutSubIndex.push_back(i - j) ;
            j = 0 ;
        }
    }
}


int main(int argc, char*argv[]) {
    std::string strTarget = "xababccdabefghabcabxababccdabefghabcabxababccdabefghabcab" ;
    std::string strSrc = "abcab" ;
    std::vector<size_t> vecIndex ;
    target_parse(strTarget , strSrc , vecIndex) ;
    std::cout << strTarget << std::endl ;
    std::cout << strSrc << std::endl ;
    for(size_t i = 0 ; i < vecIndex.size() ; ++i){
        std::cout << vecIndex[i] << " " << strTarget.substr(vecIndex[i] , strSrc.size()) << std::endl ;
    }
    std::cout << std::endl ;
    return 0 ;
}

