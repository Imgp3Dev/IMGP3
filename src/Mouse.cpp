/*I'm not the orginal owner of this source code*/ 
//https://github.com/SFML



#include <SFML/Window/Mouse.hpp>
#include <SFML/Window/InputImpl.hpp>
#include <SFML/Window/Window.hpp>


namespace sf
{
////////////////////////////////////////////////////////////
bool Mouse::isButtonPressed(Button button)
{
    return priv::InputImpl::isMouseButtonPressed(button);
}


////////////////////////////////////////////////////////////
Vector2i Mouse::getPosition()
{
    return priv::InputImpl::getMousePosition();
}


////////////////////////////////////////////////////////////
Vector2i Mouse::getPosition(const Window& relativeTo)
{
    return priv::InputImpl::getMousePosition(relativeTo);
}


////////////////////////////////////////////////////////////
void Mouse::setPosition(const Vector2i& position)
{
    priv::InputImpl::setMousePosition(position);
}


////////////////////////////////////////////////////////////
void Mouse::setPosition(const Vector2i& position, const Window& relativeTo)
{
    priv::InputImpl::setMousePosition(position, relativeTo);
}

} // namespace sf
