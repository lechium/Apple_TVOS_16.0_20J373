//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MISSING_TYPE, NSFileHandle, NSUUID;

@protocol UAUserActivityClientResponseProtocol <NSObject>
- (void)tellClientDebuggingEnabled:(_Bool)arg1 logFileHandle:(NSFileHandle *)arg2;
- (void)tellClientUserActivityItWasResumed:(NSUUID *)arg1;
- (void)askClientUserActivityToSave:(NSUUID *)arg1 completionHandler:(void (^)(UAUserActivityInfo *, _Bool, NSError *))arg2;
- (MISSING_TYPE *)askClientUserActivityToSave: /* Error: Ran out of types for this method. */;
@end

