//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NDApplication : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
}

+ (_Bool)springBoardApplicationExistsWithIdentifier:(id)arg1;	// IMP=0x00400000000019a5
+ (id)springboardApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000001894
+ (id)applicationWithIdentifier:(id)arg1;	// IMP=0x0010000000001779
+ (void)initialize;	// IMP=0x0010000000001720
- (void).cxx_destruct;	// IMP=0x0020000000001e0a
- (void)invokeSelectorForAllObservers:(SEL)arg1;	// IMP=0x0010000000001be0
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000001b41
- (void)addObserver:(id)arg1;	// IMP=0x0010000000001ac5
- (_Bool)isForeground;	// IMP=0x0010000000001abd
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x0010000000001ab5
- (id)initWithOperationID:(id)arg1;	// IMP=0x0010000000001a20

@end

