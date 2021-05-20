//
//  DOSConfig.h
//  Dosmono
//
//  Created by 孙鹏 on 2020/7/20.
//  Copyright © 2020 shuanghoukj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DOSConfig : NSObject

@property (nonatomic, strong) NSString *accessKey;

@property (nonatomic, strong) NSString *secretKey;


- (instancetype)initWithAccessKey:(NSString *)accessKey secretKey:(NSString *)secretKey;

 

@end



NS_ASSUME_NONNULL_END
