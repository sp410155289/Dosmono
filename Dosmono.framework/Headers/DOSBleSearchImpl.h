//
//  DOSBleSearchImpl.h
//  Dosmono
//
//  Created by 孙鹏 on 2020/7/20.
//  Copyright © 2020 shuanghoukj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CBManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface DOSBleSearchImpl : NSObject

/*!
 * 搜索开始回调
*/
@property (nonatomic, copy) OnSearchStart onSearchStart;

/*!
 * 搜索到的设备列表
*/
@property (nonatomic, copy) OnFoundDevices onFoundDevices;

/*!
 * 搜索停止回调
*/
@property (nonatomic, copy) OnSearchStop onSearchStop;

/*!
 * 搜索取消回调
*/
@property (nonatomic, copy) OnSearchCancel onSearchCancel;

/*!
 * 蓝牙搜索对象单例
*/
+ (instancetype)sharedInstance;

/*!
 * 设置蓝牙单次搜索时长，默认20s
*/
- (void)setDuration:(int)second;

/*!
 * 设置蓝牙搜索次数，默认一次
*/
- (void)setTimes:(NSInteger)num;

/*!
 * 开始蓝牙搜索
*/
- (void)startSearch;

/*!
 * 停止蓝牙搜索
*/
- (void)stopSearch;


@end

NS_ASSUME_NONNULL_END
