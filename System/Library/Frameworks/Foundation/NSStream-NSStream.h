//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSStream.h>

@interface NSStream (NSStream)
+ (void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;	// IMP=0x008000000056532e
+ (void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;	// IMP=0x008000000056527b
+ (void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id *)arg2 outputStream:(id *)arg3;	// IMP=0x008000000056545e
- (id)streamError;	// IMP=0x0010000000564610
- (unsigned long long)streamStatus;	// IMP=0x00100000005645df
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000005645b4
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x0010000000564589
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000056455b
- (id)propertyForKey:(id)arg1;	// IMP=0x001000000056452d
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000564502
- (id)delegate;	// IMP=0x00100000005644d4
- (void)close;	// IMP=0x00100000005644a9
- (void)open;	// IMP=0x001000000056447e
- (id)init;	// IMP=0x00100000005643d7
@end
