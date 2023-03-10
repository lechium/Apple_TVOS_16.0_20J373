//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebInspectorFrontend : NSObject
{
    NakedPtr_fc424271 m_frontendClient;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001077f0
- (void)showConsole;	// IMP=0x00000000001077e0
- (void)setTimelineProfilingEnabled:(_Bool)arg1;	// IMP=0x00000000001077d0
- (_Bool)isTimelineProfilingEnabled;	// IMP=0x00000000001077c0
- (void)stopProfilingJavaScript;	// IMP=0x00000000001077b0
- (void)startProfilingJavaScript;	// IMP=0x00000000001077a0
- (_Bool)isProfilingJavaScript;	// IMP=0x0000000000107790
- (void)setDebuggingEnabled:(_Bool)arg1;	// IMP=0x0000000000107780
- (_Bool)isDebuggingEnabled;	// IMP=0x0000000000107770
- (void)close;	// IMP=0x0000000000107750
- (void)detach;	// IMP=0x0000000000107730
- (void)attach;	// IMP=0x0000000000107710
- (id)initWithFrontendClient:(NakedPtr_fc424271)arg1;	// IMP=0x00000000001076d0

@end

