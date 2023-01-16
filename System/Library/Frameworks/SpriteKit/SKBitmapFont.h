//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKBitmapFont : NSObject
{
    NSString *_fontName;	// 8 = 0x8
    NSString *_filePath;	// 16 = 0x10
    double _lineHeight;	// 24 = 0x18
    double _baseLine;	// 32 = 0x20
    NSArray *_characterSprites;	// 40 = 0x28
    struct map<unsigned short, SKSpriteNode *, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, SKSpriteNode *>>> _characterSpriteByChar;	// 48 = 0x30
    struct map<unsigned short, double, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> _characterAdvanceByChar;	// 72 = 0x48
    struct map<unsigned int, double, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, double>>> _characterKerningByCharPair;	// 96 = 0x60
    _Bool _internal;	// 120 = 0x78
    NSString *_fileName;	// 128 = 0x80
}

+ (id)fontWithTexture:(id)arg1 fontDataString:(id)arg2;	// IMP=0x001000000002c3f3
+ (id)fontForFileNamed:(id)arg1;	// IMP=0x001000000002c16c
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002a3d5
+ (id)_fontForFileNamed:(id)arg1;	// IMP=0x001000000002c540
- (id).cxx_construct;	// IMP=0x000000000002c510
- (void).cxx_destruct;	// IMP=0x000000000002c4a8
- (double)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2;	// IMP=0x000000000002c3ba
- (double)advanceForCharacterNamed:(unsigned short)arg1;	// IMP=0x000000000002c385
- (double)lineHeight;	// IMP=0x000000000002c37a
- (id)spriteForCharacterNamed:(unsigned short)arg1;	// IMP=0x000000000002c332
- (_Bool)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2;	// IMP=0x000000000002a98c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a965
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a60c
- (id)init;	// IMP=0x000000000002a3dd
- (id)fontName;	// IMP=0x000000000002a3c4

@end

