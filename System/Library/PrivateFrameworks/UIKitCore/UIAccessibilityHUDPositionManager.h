//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDPositionManager : NSObject
{
    NSMapTable *_managedHUDs;	// 8 = 0x8
    struct CGRect _keyboardAvoidanceArea;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x006000000001a377
- (void).cxx_destruct;	// IMP=0x000000000001b13c
- (void)stopManagingPositionOfHUD:(id)arg1;	// IMP=0x000000000001b126
- (void)beginManagingPositionOfHUD:(id)arg1 withReferenceView:(id)arg2;	// IMP=0x000000000001b107
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2;	// IMP=0x000000000001b0db
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 keyboardFrame:(struct CGRect)arg3;	// IMP=0x000000000001a9c1
- (void)keyboardFrameDidChange:(id)arg1;	// IMP=0x000000000001a8bc
- (void)updateFramesForManagedHUDsUsingKeyboardFrame:(struct CGRect)arg1;	// IMP=0x000000000001a70c
- (void)dealloc;	// IMP=0x000000000001a697
- (id)init;	// IMP=0x000000000001a3cc

@end

