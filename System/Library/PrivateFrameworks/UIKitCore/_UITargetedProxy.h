//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface _UITargetedProxy : NSProxy
{
    id __target;	// 8 = 0x8
}

+ (id)proxyWithTarget:(id)arg1;	// IMP=0x006000000105ddee
- (void).cxx_destruct;	// IMP=0x000000000105dffe
@property(retain, nonatomic, setter=_setTarget:) id _target; // @synthesize _target=__target;
- (id)description;	// IMP=0x000000000105df5d
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000105df3a
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000105de6c

@end

