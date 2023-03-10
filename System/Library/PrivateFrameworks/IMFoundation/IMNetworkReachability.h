//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMNetworkReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x006000000003f92b
+ (id)reachabilityForInternetConnection;	// IMP=0x006000000003f8cf
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x006000000003f843
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x006000000003f781
- (long long)currentReachabilityStatus;	// IMP=0x000000000003fb90
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000003fb4f
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000003f997
- (void)dealloc;	// IMP=0x000000000003f73a

@end

