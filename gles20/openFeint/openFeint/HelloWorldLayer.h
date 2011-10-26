//
//  HelloWorldLayer.h
//  openFeint
//
//  Created by Carlos Sessa on 10/26/11.
//  Copyright NASA Trained Monkeys 2011. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer<CCTargetedTouchDelegate>
{
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
