//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _FMObserverProxy : NSObject
{
    _Bool _valid;	// 8 = 0x8
    id _weakObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ef98
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) __weak id weakObserver; // @synthesize weakObserver=_weakObserver;
- (void)dealloc;	// IMP=0x000000000000ef3b
- (void)invalidate;	// IMP=0x000000000000ef31
- (id)initWithWeakObserver:(id)arg1;	// IMP=0x000000000000eec9

@end

