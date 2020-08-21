//
//  DOSBleConnectImpl.h
//  Dosmono
//
//  Created by 孙鹏 on 2020/7/20.
//  Copyright © 2020 shuanghoukj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CBPeripheral.h>

NS_ASSUME_NONNULL_BEGIN

@class DOSBleFlags;

@interface DOSBleConnectImpl : NSObject

/*!
 * 监听蓝牙连接状态回调
*/
@property (nonatomic, copy) OnConnectStatus onConnectStatus;

/*!
 * 蓝牙连接失败回调
*/
@property (nonatomic, copy) OnConnectFail onConnectFail;

/*!
 * 蓝牙连接成功回调
*/
@property (nonatomic, copy) OnConnectSuccess onConnectSuccess;

/*!
 * 蓝牙连接超时回调
*/
@property (nonatomic, copy) OnConnectTimeout onConnectTimeout;

/*!
 * 蓝牙交互结果回调
*/
@property (nonatomic, copy) OnCmdReceive onCmdReceive;

/*!
 * 蓝牙交互结果回调
*/
@property (nonatomic, copy) OnFileList onFileList;

/*!
 * 蓝牙连接对象单例
*/
+ (instancetype)sharedInstance;

/*!
 * 蓝牙连接
*/
- (void)connectDevice:(CBPeripheral *)peripheral;

/*!
 * 取消蓝牙连接
*/
- (void)disconnectDevice:(CBPeripheral *)peripheral;

/*!
 * 蓝牙交互
*/
- (void)sendCmdWithValue:(NSString *)value flags:(DOSBleFlag)flags;



@end

NS_ASSUME_NONNULL_END
