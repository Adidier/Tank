#include "Configuration.h"
#include<iostream>

Configuration::Configuration()
{
}

Configuration::~Configuration()
{
}

void Configuration::Init(Platform * platform)
{
	std::cout << " Configuration Init" << std::endl;
}

void Configuration::Draw()
{
	std::cout << " Configuration Draw" << std::endl;
}

void Configuration::Input()
{
	std::cout << " Configuration Input" << std::endl;
}

void Configuration::Update()
{
	std::cout << " Configuration Update" << std::endl;
}

void Configuration::Close()
{
	std::cout << " Close Init" << std::endl;
}