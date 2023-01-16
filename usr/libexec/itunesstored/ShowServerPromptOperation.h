//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;	// 96 = 0x60
}

- (_Bool)_promptNeedsDisplay;	// IMP=0x002000000009b0dd
- (id)_newStoreURLOperation:(id *)arg1;	// IMP=0x001000000009aec9
- (_Bool)_automaticDownloadsPromptNeedsDisplay;	// IMP=0x001000000009ae7e
- (void)run;	// IMP=0x001000000009a996
@property(readonly) NSString *promptIdentifier;
- (void)dealloc;	// IMP=0x001000000009a936
- (id)initWithPromptIdentifier:(id)arg1;	// IMP=0x001000000009a8d8
- (id)init;	// IMP=0x001000000009a8c4

@end

