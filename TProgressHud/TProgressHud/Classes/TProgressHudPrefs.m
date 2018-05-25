//
//  TProgressHudPrefs.m
//  TProgressHud
//
//  Created by CareLand.y on 2018/5/25.
//  Copyright © 2018年 Fmyz. All rights reserved.
//

#import "TProgressHudPrefs.h"

@implementation TProgressHudPrefs

+ (instancetype)shareInstance
{
    static TProgressHudPrefs *prefs = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (!prefs) {
            prefs = [[TProgressHudPrefs alloc] init];
        }
    });
    
    return prefs;
}

@end
