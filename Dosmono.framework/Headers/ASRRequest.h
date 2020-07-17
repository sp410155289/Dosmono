//
//  ASRRequest.h
//  Dosmono
//
//  Created by 孙鹏 on 2020/7/16.
//  Copyright © 2020 shuanghoukj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ASRRequest : NSObject

/*!
*  创建语音识别对象的单例
*/
+ (nonnull instancetype)sharedInstance;

/*!
*  初始化鉴权
*  accesskey， 密钥应用名，由双猴提供，必填
*  secretKey，密钥，由双猴提供，必填
*/

- (void)initWithAccessKey:(NSString *)accessKey secretKey:(NSString *)secretKey callback:(void(^)(BOOL isSuccess))result;

@end
