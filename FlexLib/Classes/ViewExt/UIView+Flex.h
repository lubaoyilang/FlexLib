//
//  UIView+Flex.h
//  UIView+Flex
//
//  Created by zhenglibao on 2017/12/4.
//  Copyright © 2017年 wbg. All rights reserved.
//

#import <UIKit/UIKit.h>

#define FLEXSET(propName)               \
-(void)setFlex##propName:(NSString*)sValue

@interface UIView (Flex)

//子类可以重载做些加载后的处理
-(void)postCreate;

//子view的frame发生了改变
-(void)subFrameChanged:(UIView*)subView
                  Rect:(CGRect)newFrame;

//父view的frame发生了改变
-(void)superFrameChanged;

@end
