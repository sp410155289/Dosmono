//
//  DOSIBleConnectCallback.h
//  Dosmono
//
//  Created by 孙鹏 on 2020/7/20.
//  Copyright © 2020 shuanghoukj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CBManager.h>
<<<<<<< HEAD
#import <CoreBluetooth/CBCentralManager.h>

=======
>>>>>>> bbeaa619f80c687f23cbbd6e898c655bd336b604

NS_ASSUME_NONNULL_BEGIN

/*!
 * 监听蓝牙连接状态回调
*/
typedef void (^OnConnectStatus)(CBPeripheralState state);

/*!
<<<<<<< HEAD
 * 监听主设备状态回调
*/
typedef void (^OnCentralStatus)(CBManagerState state);

/*!
=======
>>>>>>> bbeaa619f80c687f23cbbd6e898c655bd336b604
 * 蓝牙连接失败回调
*/
typedef void (^OnConnectFail)(void);

/*!
 * 蓝牙连接成功回调
*/
typedef void (^OnConnectSuccess)(void);

/*!
 * 蓝牙连接超时回调
*/
typedef void (^OnConnectTimeout)(void);

/*!
 * 蓝牙交互结果回调
*/
typedef void (^OnCmdReceive)(NSString *value, DOSBleFlag flag);

/*!
 * 文件列表回调
*/
typedef void (^OnFileList)(NSArray<NSString *> *list);

<<<<<<< HEAD
/*!
 * 首次鉴权后配置文件下载进度，配置文件下载完成后可使用语音识别。
*/
typedef void (^OnDownloadConfigFileFinished)(double progress);

=======
>>>>>>> bbeaa619f80c687f23cbbd6e898c655bd336b604
@interface DOSIBleConnectCallback : NSObject

@end

NS_ASSUME_NONNULL_END