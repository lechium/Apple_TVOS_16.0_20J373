//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSMutableURLRequest.h>

@class AssetRequestProperties;

@interface AssetRequest : NSMutableURLRequest
{
    AssetRequestProperties *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000126aca
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000126a5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000126a49
- (void)setAllowsExpensiveNetworkAccess:(_Bool)arg1;	// IMP=0x00100000001269d7
- (void)setAllowsConstrainedNetworkAccess:(_Bool)arg1;	// IMP=0x001000000012698b
- (void)setAllowsCellularAccess:(_Bool)arg1;	// IMP=0x001000000012693f
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;	// IMP=0x00100000001268f5

@end

