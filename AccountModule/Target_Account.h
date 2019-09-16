//
//  Target_Account.h
//  AccountModule
//
//  Created by 曹鹏旭 on 2019/9/16.
//  Copyright © 2019 曹鹏飞. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface Target_Account : NSObject
/**
 *登录
 **/
- (UIViewController *)Action_nativeLoginViewController;
/**
 *登陆状态
 **/
- (BOOL)Action_nativeLoginStatus;
/**
 *登陆状态改变
 **/
- (NSString *)Action_nativeLoginStatusChangeNotificationName;


@end

NS_ASSUME_NONNULL_END
