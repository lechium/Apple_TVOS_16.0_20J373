//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIActivity, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface SFUIActivityImageRequest
{
    long long _activityCategory;	// 8 = 0x8
    NSString *_contentSizeCategory;	// 16 = 0x10
    UIActivity *_activity;	// 24 = 0x18
    UIImageSymbolConfiguration *_imageSymbolConfiguration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002ac13
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // @synthesize imageSymbolConfiguration=_imageSymbolConfiguration;
@property(readonly, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(readonly, nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
- (id)initWithRequestID:(int)arg1 activity:(id)arg2 contentSizeCategory:(id)arg3 imageSymbolConfiguration:(id)arg4 synchronous:(_Bool)arg5 resultHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000002aa93
- (id)initWithRequestID:(int)arg1 identifier:(id)arg2 activityCategory:(long long)arg3 contentSizeCategory:(id)arg4 synchronous:(_Bool)arg5 resultHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000002a9f7

@end

