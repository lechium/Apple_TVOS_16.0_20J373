//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOutputStream, NSString;
@protocol SHDataStream;

__attribute__((visibility("hidden")))
@interface SHDataStreamOutput : NSObject
{
    id <SHDataStream> _next;	// 8 = 0x8
    NSOutputStream *_outputStream;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000091ff
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) id <SHDataStream> next; // @synthesize next=_next;
- (_Bool)processData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000090ae
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0000000000009015
- (id)initWithDestination:(id)arg1;	// IMP=0x0000000000008f7b
- (void)dealloc;	// IMP=0x0000000000008f39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
