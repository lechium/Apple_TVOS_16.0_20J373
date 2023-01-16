//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WebDisplayLinkHandler : NSObject
{
    void *m_monitor;	// 8 = 0x8
    CADisplayLink *m_displayLink;	// 16 = 0x10
}

- (void)invalidate;	// IMP=0x0000000000a5f490
- (void)setPaused:(_Bool)arg1;	// IMP=0x0000000000a5f470
- (void)handleDisplayLink:(id)arg1;	// IMP=0x0000000000a5f430
- (void)dealloc;	// IMP=0x0000000000a5f400
- (id)initWithMonitor:(void *)arg1;	// IMP=0x0000000000a5f350

@end

