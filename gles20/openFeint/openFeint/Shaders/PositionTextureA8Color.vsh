// http://www.cocos2d-iphone.org

attribute vec4 a_position;
attribute vec2 a_texCoord;
attribute vec4 a_color;

uniform		mat4 u_MVPMatrix;

varying lowp vec4 v_fragmentColor;
varying lowp vec2 v_texCoord;

void main()
{
    gl_Position = u_MVPMatrix * a_position;
	v_fragmentColor = a_color;
	v_texCoord = a_texCoord;
}