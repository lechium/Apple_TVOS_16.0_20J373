//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorResultsAudio : NSObject
{
    unsigned int _remoteSSRC;	// 8 = 0x8
    unsigned int _audioUnitModel;	// 12 = 0xc
    _Bool _allowRecording;	// 16 = 0x10
    _Bool _allowSwitching;	// 17 = 0x11
    int _primaryPayload;	// 20 = 0x14
    int _dtxPayload;	// 24 = 0x18
    int _redPayload;	// 28 = 0x1c
    NSMutableSet *_secondaryPayloads;	// 32 = 0x20
    _Bool _useSBR;	// 40 = 0x28
}

@property(nonatomic) _Bool useSBR; // @synthesize useSBR=_useSBR;
@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property(nonatomic) _Bool allowSwitching; // @synthesize allowSwitching=_allowSwitching;
@property(nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property(nonatomic) _Bool allowRecording; // @synthesize allowRecording=_allowRecording;
@property(nonatomic) int redPayload; // @synthesize redPayload=_redPayload;
@property(nonatomic) int dtxPayload; // @synthesize dtxPayload=_dtxPayload;
@property(nonatomic) int primaryPayload; // @synthesize primaryPayload=_primaryPayload;
- (void)dealloc;	// IMP=0x000000000017bbc8
- (void)addSecondaryPayload:(int)arg1;	// IMP=0x000000000017bb8f
@property(readonly, nonatomic) NSArray *secondaryPayloads;
- (id)init;	// IMP=0x000000000017baf5

@end

