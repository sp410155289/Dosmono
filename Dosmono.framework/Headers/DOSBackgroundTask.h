//
//  DOSBackgroundTask.h
//  Dosmono
//
//  Created by 孙鹏 on 2021/4/13.
//  Copyright © 2021 shuanghoukj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DOSBackgroundTask : NSObject

+ (instancetype)shareManager;

- (void)start;

- (void)end;

@end

NS_ASSUME_NONNULL_END
