//
//  PlayingCardDeck.m
//  CardMatchingGame
//
//  Created by 7 on 14-3-8.
//  Copyright (c) 2014年 7. All rights reserved.
//

#import "PlayingCardDeck.h"
#import "PlayingCard.h"

@implementation PlayingCardDeck


- (instancetype)init
{
    self = [super init];
    
    if (self) {
        
        for (NSString *suit in [PlayingCard validSuits]) {
            for (NSUInteger rank =1; rank <= [PlayingCard maxRank]; rank++) {
                PlayingCard *card = [[PlayingCard alloc]init];
                card.suit = suit;
                card.rank = rank;
                [self addCard:card];
            }
        }
        
    }
    
    return  self;
}

@end
