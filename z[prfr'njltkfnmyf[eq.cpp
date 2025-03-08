//a%4+3
#include <string>
#include <iostream>
#include <vector>
#include <list>

class words {
public:
    int n1;
    int n2;
    std::string wo;
};

void print(const std::vector<std::string>& wo) {//понятно из названия
    for (int i = 0; i < wo.size(); i++) {
        std::cout << i << " " << wo[i] << std::endl;
    }
    std::cout << std::endl;
}
void init(std::vector<std::string>& wo, int n1, int n2, const std::string& st) {//отвечает за изменение
    
    if (wo[n1] == "nullptr") {
        wo[n1] = st;
    }
    else {
        int y = n1; 
        while (y < wo.size() && wo[y] != "nullptr") {
            y += n2; //шаг
        }
        if (y < wo.size()) {
            wo[y] = st; 
        }
    }
}
void remove(std::vector<std::string>& wo, int n1) {//убирает элемент
    wo[n1] = "nullptr";
    
}
void clear(std::vector<std::string>& wo) {//убирает всё
    for (int i = 0; i < wo.size(); i++) {
        wo[i] = "nullptr";
    }
}
void find(const std::vector<std::string>& wo, const std::string& st) {//ищет через схожесть
    for (int i = 0; i < wo.size(); i++) {
        if (wo[i] == st) {
            std::cout << i << " " << wo[i] << std::endl;
        }
    }
}
int main() {
    int n;
    std::cin >> n;//задаём размер
    std::vector<std::string> wo(n, "nullptr");//инициализируем
//далее идут сами действия
    init(wo, 2, 1, "try hard");
    init(wo, 2, 3, "try hard");
    find(wo, "try hard");
    print(wo);
    clear(wo);
    print(wo);
    return 0;
}
//лучше не будет, потому что не умею иначе
