//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface _UIButtonBarTargetAction : NSObject
{
    UIBarButtonItem *_barButtonItem;	// 8 = 0x8
    CDUnknownBlockType _actionFilter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000102c17
@property(copy, nonatomic) CDUnknownBlockType actionFilter; // @synthesize actionFilter=_actionFilter;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
- (void)_invoke:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000001029f5
@property(readonly, nonatomic) SEL proxyAction;
- (id)initWithBarButtonItem:(id)arg1;	// IMP=0x000000000010297d
- (id)init;	// IMP=0x00000000001028ce

@end

