//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSUIWebDelegateProxy : NSObject
{
    id _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000061b6b
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000061b3e
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000061ad8
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000061a5f
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000619bb
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000061957

@end

