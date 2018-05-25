//
//  TProgressHudPrefs.h
//  TProgressHud
//
//  Created by CareLand.y on 2018/5/25.
//  Copyright © 2018年 Fmyz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TProgressHudPrefs : NSObject

+ (instancetype)shareInstance;

@property (copy, nonatomic) void (^commonBackGroundColor)(UIColor *hudBackGroundColor);
@property (copy, nonatomic) void (^commonTextColor)(UIColor *textColor);
@property (copy, nonatomic) void (^commonTextFont)(UIFont *textFont);

@end
