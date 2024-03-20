#include <iostream>

class B {
public:
    B() = default;
    explicit B(int b) : b_{b} {}
    virtual ~B() = default;

    virtual void Display() {
        std::cout << "B: " << b_ << std::endl;
    }

private:
	int b_{0};
};

class D1 : public B {
public:
    D1() = default;
    explicit D1(int d1) : B(), d1_{d1} {}
    ~D1() = default;

    virtual void Display() override;
private:
	int d1_{0};
};

int main() {
	D1 d1(10);

	return 0;
}
