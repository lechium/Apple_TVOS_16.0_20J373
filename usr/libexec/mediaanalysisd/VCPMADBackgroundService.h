//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface VCPMADBackgroundService : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
}

+ (int)runWithArgc:(int)arg1 andArgv:(const char **)arg2;	// IMP=0x0020000000096035
- (void).cxx_destruct;	// IMP=0x0020000000096492
- (int)run;	// IMP=0x0010000000095f2f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000095c00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

