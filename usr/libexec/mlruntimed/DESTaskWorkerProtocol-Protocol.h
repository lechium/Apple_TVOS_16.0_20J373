//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol DESTaskWorkerProtocol <NSObject>
- (NSDictionary *)telemetryResponse;
- (void)stop;
- (void)runWithCompletion:(void (^)(id, NSError *))arg1;
@end

