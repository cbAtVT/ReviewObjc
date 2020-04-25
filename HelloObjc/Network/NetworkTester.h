//
//  JRNetworkManager.h
//  HelloObjc
//
//  Created by jaben on 2020/4/12.
//  Copyright © 2020 Jaben. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetworkTester : NSObject

- (void)quickStartHTTPTask;

//TCP
- (void)initClientTCPSocketAndConnectServerIP:(NSString *)ip port:(int)port;
- (void)readStreamData4ClientInTCP;
- (void)sendStreamData4ClientInTCP;

- (void)initSocket4ServerInTCP;


@end

NS_ASSUME_NONNULL_END
