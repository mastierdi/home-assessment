import click
import os


@click.group()
def main():
    pass


@main.command()
@click.option('-f', '--filename', help="Enter filename to rename")
@click.option('-n', '--newname', help="Enter new filename")
@click.option('-d', '--dir', default='./', help="Path to directory with file. Default is root directory")
def rename(filename, newname, dir):

    if filename in os.listdir(dir):
        os.rename(filename, newname)
        click.secho('File renamed', fg='green')

    else:
        click.secho('File not found. Enter correct file name', fg='red')


if __name__ == '__main__':
    main()
