//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIFocusStateObserver : NSObject
{
    NSMapTable *_observers;	// 8 = 0x8
    struct {
        unsigned int wasActive:1;
    } _flags;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006acd62
- (id)description;	// IMP=0x00000000006acd12
- (id)descriptionBuilder;	// IMP=0x00000000006acc42
- (void)notifyObserversIfNecessary;	// IMP=0x00000000006acaf6
- (void)removeObserver:(id)arg1;	// IMP=0x00000000006aca32
- (id)addObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000000006ac938
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)init;	// IMP=0x00000000006ac835

@end

