//
//  DOSDosmono.h
//  Dosmono
//
//  Created by 孙鹏 on 2020/7/20.
//  Copyright © 2020 shuanghoukj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DOSDosmono : NSObject

+ (instancetype)sharedInstance;

- (void)initWithAccessKey:(NSString *)accessKey secretKey:(NSString *)secretKey callback:(void(^)(BOOL isSuccess))result;

@end

NS_ASSUME_NONNULL_END
