//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol AVOutputDeviceFrecentsReading <NSObject>
@property(readonly, nonatomic) NSArray *deviceIDs;
- (NSDictionary *)frecencyInfoForDeviceWithID:(NSString *)arg1;
@end

