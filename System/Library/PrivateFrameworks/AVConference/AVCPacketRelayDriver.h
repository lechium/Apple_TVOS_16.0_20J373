//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCPacketRelayDriver : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00800000003a2dfd
- (void)dealloc;	// IMP=0x00000000003a3232
- (id)init;	// IMP=0x00000000003a30d4
- (void)stopMonitoringFileDescriptor:(int)arg1;	// IMP=0x00000000003a2fb4
- (void)startMonitoringFileDescriptor:(int)arg1 forConnection:(id)arg2;	// IMP=0x00000000003a2e7b

@end

