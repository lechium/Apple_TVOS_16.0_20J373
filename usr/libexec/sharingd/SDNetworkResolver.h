//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SDBonjourResolver;
@protocol SDNetworkResolverDelegate;

@interface SDNetworkResolver : NSObject
{
    struct __SFNode *_node;	// 8 = 0x8
    SDBonjourResolver *_resolver;	// 16 = 0x10
    void *_session;	// 24 = 0x18
    NSNumber *_flags;	// 32 = 0x20
    NSString *_protocol;	// 40 = 0x28
    id <SDNetworkResolverDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000009b549
@property __weak id <SDNetworkResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *flags; // @synthesize flags=_flags;
- (void)stop;	// IMP=0x001000000009b48d
- (int)start;	// IMP=0x001000000009b153
- (void)mount;	// IMP=0x001000000009b14d
- (void)bonjourResolverDidChange:(id)arg1;	// IMP=0x001000000009ae76
- (void)mountDiskImageAsync;	// IMP=0x001000000009ae70
- (void)notifyClientAboutResolve:(int)arg1;	// IMP=0x001000000009ad4f
- (void)dealloc;	// IMP=0x001000000009ad15
- (id)initWithNode:(struct __SFNode *)arg1;	// IMP=0x001000000009ac8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

