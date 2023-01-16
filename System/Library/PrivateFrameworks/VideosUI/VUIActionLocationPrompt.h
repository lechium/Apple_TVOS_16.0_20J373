//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIActionLocationPrompt
{
    _Bool _geoLocationEnforced;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSDictionary *_dialogMetrics;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000eb4d0
@property(retain, nonatomic) NSDictionary *dialogMetrics; // @synthesize dialogMetrics=_dialogMetrics;
@property(nonatomic) _Bool geoLocationEnforced; // @synthesize geoLocationEnforced=_geoLocationEnforced;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_locationAuthorizationStatusDidChange:(id)arg1;	// IMP=0x00000000000eb3d4
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb14d
- (id)initWithContextData:(id)arg1;	// IMP=0x00000000000eaf72

@end
