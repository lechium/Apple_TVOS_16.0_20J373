//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSString, XPCRequestToken;

@interface UpdatesBatchTask
{
    NSArray *_apps;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    XPCRequestToken *_requestToken;	// 24 = 0x18
    NSMutableArray *_updates;	// 32 = 0x20
    _Bool _userInitiated;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001b78d7
- (void)_logDeferred:(id)arg1;	// IMP=0x00100000001b72f0
- (void)_handleUpdatesResponse:(id)arg1 forAccount:(id)arg2;	// IMP=0x00100000001b6ede
- (void)_enumerateAppsByAccountUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b6aa3
@property(readonly, nonatomic) NSArray *updates;
- (void)main;	// IMP=0x00100000001b64fa
- (id)initWithApps:(id)arg1 context:(id)arg2;	// IMP=0x00100000001b63cd

@end
