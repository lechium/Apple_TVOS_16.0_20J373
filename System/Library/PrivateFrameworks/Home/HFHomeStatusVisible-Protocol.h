//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class NAFuture;

@protocol HFHomeStatusVisible <NSObject>
- (NAFuture *)hf_updateIsVisibleInHomeStatus:(_Bool)arg1;
@property(nonatomic, readonly) _Bool hf_isForcedVisibleInHomeStatus;
@property(nonatomic, readonly) _Bool hf_hasSetVisibleInHomeStatus;
@property(nonatomic, readonly) _Bool hf_isVisibleInHomeStatus;
@property(nonatomic, readonly) _Bool hf_supportsHomeStatus;
@end

