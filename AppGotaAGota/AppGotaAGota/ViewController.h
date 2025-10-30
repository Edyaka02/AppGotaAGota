//
//  ViewController.h
//  AppGotaAGota
//
//  Created by Guest User on 29/10/25.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController

@property (weak) IBOutlet NSTextField *campoLitros;
@property (weak) IBOutlet NSTextField *labelFeedback;
@property (weak) IBOutlet NSStepper *stepperLitros;
@property (weak) IBOutlet NSView *vistaGrafico;
@property (weak) IBOutlet NSTextField *labelPromedio;
@property (weak) IBOutlet NSBox *boxAlerta;
@property (weak) IBOutlet NSTextField *labelAlerta;
@property (weak) IBOutlet NSScrollView *campoRecomendaciones;

- (IBAction)guardarConsumo:(id)sender;
- (IBAction)stepperCambioValor:(id)sender;
- (IBAction)segmentoGraficoCambiado:(id)sender;


@end

