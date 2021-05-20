//
//  DOSAudioEncoder.h
//  Dosmono
//
//  Created by 孙鹏 on 2021/2/4.
//  Copyright © 2021 shuanghoukj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DOSAudioEncoder : NSObject

/*!
 * 编码器对象单例
*/
+ (instancetype)sharedInstance;

/*!
 * 编码方法
*/
- (void)encodeFileWithInputPath:(NSString *)pcmPath encodeFormat:(DOSAudioFormat)format complete:(void (^) (BOOL success, NSString *path))result;

- (void)encodeFileWithInputPcm:(NSData *)data encodeFormat:(DOSAudioFormat)format complete:(void (^) (BOOL success, NSString *path))result;

- (void)cancelEncode;

@end

NS_ASSUME_NONNULL_END
