//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISDisplayContext;

__attribute__((visibility("hidden")))
@interface _UIScreenInitialDisplayConfigurationLoader : NSObject
{
    UISDisplayContext *_context;	// 8 = 0x8
    _Bool _hasRequestedPreload;	// 16 = 0x10
}

+ (id)sharedLoader;	// IMP=0x00400000007caf98
- (void).cxx_destruct;	// IMP=0x00000000007cb24e
@property(readonly, nonatomic) UISDisplayContext *initialDisplayContext;
- (void)_startPreloadInitialDisplayContext;	// IMP=0x00000000007caff9

@end

